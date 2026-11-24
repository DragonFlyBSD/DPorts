PORTNAME=	fconfig
PORTVERSION=	20080329
CATEGORIES=	sysutils
MASTER_SITES=	http://downloads.openwrt.org/sources/ \
		http://andrzejekiert.ovh.org/software/fconfig/

MAINTAINER=	thompsa@FreeBSD.org
COMMENT=	Read and modify RedBoot embedded boot configuration
WWW=		http://andrzejekiert.ovh.org/software.html.en

USES=		gmake

WRKSRC=		${WRKDIR}/${PORTNAME}
PLIST_FILES=	sbin/fconfig

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/fconfig ${STAGEDIR}${PREFIX}/sbin

dfly-patch:
	${REINPLACE_CMD} -E -e 's/defined[ ]*\([ ]*__FreeBSD__[ ]*\)/(defined(__FreeBSD__) || defined(__DragonFly__))/g' \
		-e 's/^#([[:space:]]*)ifdef[[:space:]]+__FreeBSD__/#\1if defined(__FreeBSD__) || defined(__DragonFly__)/' \
		-e 's/^#([[:space:]]*)ifndef[[:space:]]+__FreeBSD__/#\1if !defined(__FreeBSD__) \&\& !defined(__DragonFly__)/' \
		${WRKSRC}/fconfig.c ${WRKSRC}/ftypes.c ${WRKSRC}/crunchfc.c

.include <bsd.port.mk>
