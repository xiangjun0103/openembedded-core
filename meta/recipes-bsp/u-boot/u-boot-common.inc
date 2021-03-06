HOMEPAGE = "http://www.denx.de/wiki/U-Boot/WebHome"
DESCRIPTION = "U-Boot, a boot loader for Embedded boards based on PowerPC, \
ARM, MIPS and several other processors, which can be installed in a boot \
ROM and used to initialize and test the hardware or to download and run \
application code."
SECTION = "bootloaders"
DEPENDS += "flex-native bison-native"

LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=30503fd321432fc713238f582193b78e"
PE = "1"

# Drop this line when updating to 2020.01 final
PV = "2020.01~rc5"

# We use the revision in order to avoid having to fetch it from the
# repo during parse
SRCREV = "ef7c2af65966a57c98d3c47e6c2fe1ce2103b7f6"

SRC_URI = "git://git.denx.de/u-boot.git \
          "

S = "${WORKDIR}/git"
