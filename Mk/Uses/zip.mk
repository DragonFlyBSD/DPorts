# $FreeBSD$
#
# handle zip archives
#
# Feature:	zip
# Usage:	USES=zip[:infozip]
#
# MAINTAINER: portmgr@FreeBSD.org

.if !defined(_INCLUDE_USES_ZIP_Mk)
_INCLUDE_USES_ZIP_MK=	yes

zip_ARGS?=	none

EXTRACT_SUFX?=	.zip

ZIP_BEFORE_ARGS?=	-qo
ZIP_AFTER_ARGS?=	-d ${WRKDIR}

.if defined(EXTRACT_BEFORE_ARGS)
ZIP_BEFORE_ARGS:= ${EXTRACT_BEFORE_ARGS}
.undef EXTRACT_BEFORE_ARGS
.endif

.if defined(EXTRACT_AFTER_ARGS)
ZIP_AFTER_ARGS:= ${EXTRACT_AFTER_ARGS}
.undef EXTRACT_AFTER_ARGS
.endif

.if ${zip_ARGS} == infozip
EXTRACT_DEPENDS+=	${UNZIP_CMD}:${PORTSDIR}/archivers/unzip
ZIP_EXTRACT_CMD?=	${UNZIP_CMD}
.elif ${zip_ARGS} == none
.  if ${OPSYS} == FreeBSD
ZIP_EXTRACT_CMD?=	${UNZIP_NATIVE_CMD}
.  else
EXTRACT_DEPENDS+=	${UNZIP_CMD}:${PORTSDIR}/archivers/unzip
ZIP_EXTRACT_CMD?=	${UNZIP_CMD}
.  endif
.else
IGNORE=	Incorrect 'USES+=zip:${zip_ARGS}' expecting 'USES+=zip[:infozip]'
.endif
.endif
