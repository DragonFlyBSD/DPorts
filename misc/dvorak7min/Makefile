# Created by: Leland Wang <llwang@infor.org>
# $FreeBSD: misc/dvorak7min/Makefile 336813 2013-12-18 10:38:33Z koobs $

PORTNAME=	dvorak7min
PORTVERSION=	1.6.1
CATEGORIES=	misc
MASTER_SITES=	http://www.linalco.com/ragnar/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An ncurses-based Dvorak typing tutor

NO_STAGE=	yes
.include <bsd.port.pre.mk>

MAKE_ARGS=	PROF="${CPPFLAGS} ${CFLAGS}" LDFLAGS="${LDFLAGS}"

pre-build:
	@cd ${WRKSRC} ; ${MAKE} clean

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dvorak7min ${PREFIX}/bin

.include <bsd.port.post.mk>
