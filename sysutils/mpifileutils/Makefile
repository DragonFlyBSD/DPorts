PORTNAME=	mpifileutils
DISTVERSIONPREFIX=	v
DISTVERSION=	0.12
CATEGORIES=	sysutils parallel
MASTER_SITES=	https://github.com/hpc/${PORTNAME}/releases/download/v${DISTVERSION}/

MAINTAINER=	rikka.goering@outlook.de
COMMENT=	MPI-based parallel file utilities (dcp, dcmp, ddup, dtar, etc.)
WWW=		https://hpc.github.io/mpifileutils/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/${PORTNAME}/LICENSE

LIB_DEPENDS=	libcircle.so:devel/libcircle \
		libdtcmp.so:devel/dtcmp

USES=		cmake localbase:ldflags mpi:openmpi pkgconfig ssl tar:tgz
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DCMAKE_C_COMPILER=${MPICC} \
		-DCMAKE_CXX_COMPILER=${MPICXX}
CMAKE_OFF=	ENABLE_GPFS ENABLE_LUSTRE ENABLE_XATTRS

LDFLAGS+=	-lcircle -ldtcmp

EXTRACT_AFTER_ARGS=	--exclude dtcmp \
			--exclude libcircle \
			--exclude lwgrp \
			--no-same-owner --no-same-permissions

PORTDOCS=	AUTHORS CONTRIBUTING.md DAOS-Support.md NOTICE README.md

OPTIONS_DEFINE=	DOCS

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/${PORTNAME}/|} ${STAGEDIR}${DOCSDIR}

dfly-patch:
	${REINPLACE_CMD} -E -e 's/defined[ ]*\([ ]*__FreeBSD__[ ]*\)/(defined(__FreeBSD__) || defined(__DragonFly__))/g' \
		-e 's/^#([[:space:]]*)ifdef[[:space:]]+__FreeBSD__/#\1if defined(__FreeBSD__) || defined(__DragonFly__)/' \
		-e 's/^#([[:space:]]*)ifndef[[:space:]]+__FreeBSD__/#\1if !defined(__FreeBSD__) \&\& !defined(__DragonFly__)/' \
		${WRKSRC}/mpifileutils/src/common/mfu_util.c ${WRKSRC}/mpifileutils/src/common/mfu_io.c ${WRKSRC}/mpifileutils/src/common/mfu_io.h \
		${WRKSRC}/mpifileutils/src/common/mfu_bz2.c ${WRKSRC}/mpifileutils/src/dbcast/dbcast.c ${WRKSRC}/mpifileutils/src/dcmp/dcmp.c
	${REINPLACE_CMD} -e 's/DTTOIF(entry->d_type)/((entry->d_type) << 12)/' \
		${WRKSRC}/mpifileutils/src/common/mfu_flist_walk.c

.include <bsd.port.mk>
