PORTNAME=	wmbluecpu
PORTVERSION=	0.4
PORTREVISION=	5
CATEGORIES=	sysutils windowmaker
MASTER_SITES=	SUNSITE/X11/xutils

MAINTAINER=	benjsc@FreeBSD.org
COMMENT=	CPU monitoring dockapp
WWW=		http://misuceldestept.go.ro/wmbluecpu/

USES=		tar:bzip2 xorg
USE_XORG=	xpm

post-patch:
	@${CP} ${FILESDIR}/cpu_freebsd.* ${WRKSRC}

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	@${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/share/man/man1

dfly-patch:
	${REINPLACE_CMD} -e 's@#if __FreeBSD_version > 500100@#if defined(__FreeBSD__) || defined(__DragonFly__)@g' \
			 -e 's@<osreldate.h>@<sys/sysctl.h>@g' \
		${WRKSRC}/cpu_freebsd.c

.include <bsd.port.mk>
