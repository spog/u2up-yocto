require ${YOCTODIR}/${U2UP_REPOS_DIR}/poky_${U2UP_POKY_REPO_BRANCH}/meta/recipes-kernel/linux/linux-yocto.inc

FILESEXTRAPATHS_prepend := "${THISDIR}/linux-yocto:"

SRC_URI_append = "\
 file://0001-Added-internal-ttyprintk.tioccons-request.patch\
 file://0001-sd-TEST_UNIT_READY-3-times-media_not_present.patch\
 file://ttyprintk.cfg\
"

