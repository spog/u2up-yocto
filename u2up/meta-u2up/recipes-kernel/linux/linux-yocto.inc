require ${YOCTODIR}/poky/meta/recipes-kernel/linux/linux-yocto.inc

FILESEXTRAPATHS_prepend := "${THISDIR}/linux-yocto:"

SRC_URI_append = "\
 file://0001-Added-internal-ttyprintk.tioccons-request.patch\
 file://ttyprintk.cfg\
"

