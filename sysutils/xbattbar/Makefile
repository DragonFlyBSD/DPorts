PORTNAME=	xbattbar
PORTVERSION=	1.4.2
PORTREVISION=	9
CATEGORIES=	sysutils
MASTER_SITES=	http://ftp.corbina.net/gentoo-distfiles/d6/	\
		https://ftp.fau.de/gentoo/distfiles/		\
		https://mirrors.mit.edu/gentoo-distfiles/distfiles/d6/

DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	cy@FreeBSD.org
COMMENT=	Simple battery meter
WWW=		http://iplab.aist-nara.ac.jp/member/suguru/xbattbar.html

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		imake xorg
USE_XORG=	x11 xext
WRKSRC=		${WRKDIR}/xbattbar-${PORTVERSION}
PLIST_FILES=	bin/xbattbar \
		share/man/man1/xbattbar.1.gz

dfly-patch:
	${REINPLACE_CMD} -E -e 's/defined[ ]*\([ ]*__FreeBSD__[ ]*\)/(defined(__FreeBSD__) || defined(__DragonFly__))/g' \
		-e 's/^#([[:space:]]*)ifdef[[:space:]]+__FreeBSD__/#\1if defined(__FreeBSD__) || defined(__DragonFly__)/' \
		-e 's/^#([[:space:]]*)ifndef[[:space:]]+__FreeBSD__/#\1if !defined(__FreeBSD__) \&\& !defined(__DragonFly__)/' \
		${WRKSRC}/xbattbar.c

.include <bsd.port.mk>
