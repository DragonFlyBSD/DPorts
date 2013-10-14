# Created by: markm
# $FreeBSD: misc/dejagnu/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	dejagnu
PORTVERSION=	1.5.1
CATEGORIES=	misc tcl tk
MASTER_SITES=	GNU

MAINTAINER=	tcltk@FreeBSD.org
COMMENT=	Automated program/system tester

LICENSE=	GPLv3

BUILD_DEPENDS=	expect:${PORTSDIR}/lang/expect
RUN_DEPENDS=	expect:${PORTSDIR}/lang/expect

USE_TCL=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes

MAN1=		runtest.1
INFO=		${PORTNAME}

NO_STAGE=	yes
.include <bsd.port.mk>
