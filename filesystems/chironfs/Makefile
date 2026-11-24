PORTNAME=	chironfs
PORTVERSION=	1.1.1
PORTREVISION=	3
CATEGORIES=	filesystems
MASTER_SITES=	https://BSDforge.com/projects/source/sysutils/chironfs/
PKGNAMEPREFIX=	fusefs-

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	FUSE based filesystem with replication at the filesystem level
WWW=		https://BSDforge.com/projects/sysutils/fusefs-chironfs/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/doc/copyright

USES=		fuse localbase:ldflags
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

PLIST_FILES=	bin/chironfs bin/chirctl share/man/man8/chironfs.8.gz
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's,-liconv,${ICONV_LIB},' ${WRKSRC}/src/Makefile.*

post-patch-DOCS-off:
	@${REINPLACE_CMD} -e 's, doc , ,' ${WRKSRC}/Makefile.in

dfly-patch:
	${REINPLACE_CMD} -e 's/defined(linux) || defined(__FreeBSD__)/& || defined(__DragonFly__)/' \
		-e 's/^#if defined(__FreeBSD__)$$/#if defined(__FreeBSD__) || defined(__DragonFly__)/' \
		${WRKSRC}/src/chirctl.c ${WRKSRC}/src/chirondbg.c ${WRKSRC}/src/chironfs.c

.include <bsd.port.mk>
