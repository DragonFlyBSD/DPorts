# Created by: Alan Eldridge <alane@geeksrus.net>
# $FreeBSD: ports/audio/ermixer/Makefile,v 1.22 2012/11/18 06:42:09 svnexp Exp $

PORTNAME=	ermixer
PORTVERSION=	0.8
PORTREVISION=	7
PORTEPOCH=	0
CATEGORIES=	audio kde
MASTER_SITES=	SF


MAINTAINER=	ports@FreeBSD.org
COMMENT=	A command-line, ncurses, and (optional) Qt-GUI OSS audio mixer

.if !defined(WITHOUT_X11)
USE_QT_VER=	3
CONFIGURE_ARGS+=--enable-qt
.endif

USE_PERL5_BUILD=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes

LDFLAGS+=	${PTHREAD_LIBS}
CPPFLAGS+=	${PTHREAD_CFLAGS}
PLIST_FILES=	bin/ermixer

.include <bsd.port.pre.mk>
.include "${FILESDIR}/manpages.mk"

pre-configure:
	cd ${WRKSRC}; ./automoc

.include <bsd.port.post.mk>
