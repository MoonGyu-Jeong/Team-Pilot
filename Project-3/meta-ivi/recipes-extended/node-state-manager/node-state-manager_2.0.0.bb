SUMMARY = "GENIVI Node State Manager"
DESCRIPTION = "The GENIVI Node State Manager \
		- is the central repository for information \
		- regarding the states/sessions \
		- inside the node. \
		"
HOMEPAGE = "https://www.genivi.org/"
SECTION = "base"
LICENSE = "MPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=815ca599c9df247a0c7f619bab123dad"

PR = "r3"

SRCREV = "253d10aada6bf5cdfe307aaff55363f08194c85e"
SRC_URI = "git://github.com/GENIVI/${BPN}.git;protocol=https \
           file://nsm-fix-systemd-service-dep.patch \
           file://nsm-fix-no-libsystemd-daemon.patch \
           file://link-with-gio.patch \
          "
S = "${WORKDIR}/git"

EXTRA_OECONF = "${@bb.utils.contains('DISTRO_FEATURES', 'systemd', '--with-systemdsystemunitdir=${systemd_unitdir}/system/', '', d)}"

DEPENDS = "dbus glib-2.0 glib-2.0-native systemd \
    dlt-daemon persistence-client-library"

inherit pkgconfig autotools-brokensep systemd

SYSTEMD_PACKAGES = "${PN}"
SYSTEMD_SERVICE_${PN} = "nodestatemanager-daemon.service"
SYSTEMD_AUTO_ENABLE = "disable"

do_configure:prepend() {
	mkdir -p m4
	mkdir -p NodeStateAccess/doc
	mkdir -p NodeStateAccess/generated
}

# .so files are the actual libraries
FILES_SOLIBSDEV = ""
SOLIBS = "${SOLIBSDEV}"

FILES:${PN} += "\
    ${datadir}/dbus-1/system-services \
    ${datadir}/dbus-1/interfaces/org.genivi.NodeStateManager.*.xml \
    ${systemd_unitdir}/system/nodestatemanager-daemon.service \
    "

do_install:append() {
    T_XML=${D}/${datadir}/dbus-1/interfaces/org.genivi.NodeStateMachineTest.xml
    if [ -f ${T_XML} ]; then
       rm -f ${T_XML}
    fi
}
