# Created by: Hans de Hartog <hans@dehartog.nl>
# $FreeBSD: sysutils/cdls/Makefile 317525 2013-05-06 15:34:17Z bapt $

PORTNAME=	cdls
PORTVERSION=	4.2
CATEGORIES=	sysutils
MASTER_SITES=	ftp://pd7w.fs2a.eu/

MAINTAINER=	hans@dehartog.nl
COMMENT=	A curses based file manager for system managers

PLIST_FILES=	bin/cdls

USES=		ncurses

.include <bsd.port.pre.mk>

.if ${NCURSESBASE} == /usr
# no need to use ncurses-config if we use ncurses from the base system
CONFIGURE_ARGS+=	NCURSES_CONFIG=/usr/bin/true
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${PREFIX}|g' ${WRKSRC}/Makefile

.include <bsd.port.post.mk>
