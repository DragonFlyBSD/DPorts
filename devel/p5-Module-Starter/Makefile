# Created by: clsung
# $FreeBSD: devel/p5-Module-Starter/Makefile 336060 2013-12-10 13:01:25Z jadawin $

PORTNAME=	Module-Starter
PORTVERSION=	1.62
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple starter kit for any Perl module

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Path-Class>=0:${PORTSDIR}/devel/p5-Path-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}

PORTSCOUT=	skipv:1.470

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
