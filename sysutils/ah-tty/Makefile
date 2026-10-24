PORTNAME=	ah-tty
PORTVERSION=	0.3.12
PORTREVISION=	4
CATEGORIES=	sysutils
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Automatic helper for command prompts and shells
WWW=		https://ah-tty.sourceforge.net/

USES=		ncurses
GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
USE_CSTD=	gnu89

PLIST_FILES=	bin/ah-tty bin/ah-tty.static \
		share/ah-tty.conf share/man/man1/ah-tty.1.gz

INFO=		ah-tty

post-patch:
	@${REINPLACE_CMD} -e 's|malloc.h|stdlib.h|' \
		${WRKSRC}/dillib/vty/vtlabel.c
	@${REINPLACE_CMD} -e 's|##x|x|' \
		${WRKSRC}/include/platform.h

PLIST_FILES:= ${PLIST_FILES:Nbin/ah-tty.static}
dfly-patch:
	${REINPLACE_CMD} -e '/bin_PROGRAMS/s@ah-tty.static@@g'	\
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
