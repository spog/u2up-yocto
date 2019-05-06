FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:${THISDIR}/files:"

SRC_URI_append = "\
    file://0001-Fixed-4_19-internal-ttyprintk.tioccons-request.patch \
"

