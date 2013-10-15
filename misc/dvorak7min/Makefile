# Created by: Leland Wang <llwang@infor.org>
# $FreeBSD: misc/dvorak7min/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	dvorak7min
PORTVERSION=	1.6.1
CATEGORIES=	misc
MASTER_SITES=	http://www.linalco.com/ragnar/

MAINTAINER=	llwang@infor.org
COMMENT=	An ncurses-based Dvorak typing tutor

NO_STAGE=	yes
.include <bsd.port.pre.mk>

MAKE_ARGS=	PROF="${CPPFLAGS} ${CFLAGS}" LDFLAGS="${LDFLAGS}"

pre-build:
	@cd ${WRKSRC} ; ${MAKE} clean

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dvorak7min ${PREFIX}/bin

.include <bsd.port.post.mk>
