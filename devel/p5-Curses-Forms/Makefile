# Created by: ijliao
# $FreeBSD: devel/p5-Curses-Forms/Makefile 331856 2013-10-28 13:46:25Z vanilla $

PORTNAME=	Curses-Forms
PORTVERSION=	1.997
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	CursesForms-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Provide high level APIs for rapid UI design on the console

BUILD_DEPENDS=	p5-Curses-Widgets>=0:${PORTSDIR}/devel/p5-Curses-Widgets
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
