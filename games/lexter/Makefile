# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: games/lexter/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	lexter
PORTVERSION=	1.0.3
PORTREVISION=	5
CATEGORIES=	games
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	games/arcade

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A real-time word puzzle for text terminals

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=	--localstatedir=/var/games
USES=		gettext

MAN6=	lexter.6

NO_STAGE=	yes
post-install:
	@${CHOWN} root:games ${PREFIX}/bin/lexter
	@${CHMOD} g+s ${PREFIX}/bin/lexter
	@${SH} pkg-install ${PKGNAME} POST-INSTALL

.include <bsd.port.mk>
