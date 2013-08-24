# Created by: Philippe Audeoud <jadawin@tuxaco.net>
# $FreeBSD: irc/irssi-xmpp/Makefile 325098 2013-08-21 08:46:00Z jadawin $

PORTNAME=	irssi-xmpp
PORTVERSION=	0.52
CATEGORIES=	irc
MASTER_SITES=	http://cybione.org/~irssi-xmpp/files/

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Irssi-xmpp is an irssi plugin to connect to the Jabber network

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	irssi:${PORTSDIR}/irc/irssi
RUN_DEPENDS=	irssi:${PORTSDIR}/irc/irssi
LIB_DEPENDS=	loudmouth:${PORTSDIR}/net-im/loudmouth

USES=		pkgconfig
USE_LDCONFIG=	yes

MAKE_JOBS_UNSAFE=yes

.include <bsd.port.options.mk>

post-patch:
.if ! ${PORT_OPTIONS:MDOCS}
	${REINPLACE_CMD} -e 's/ doc-install / /g' ${WRKSRC}/Makefile
.endif

.include <bsd.port.mk>
