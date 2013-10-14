# Created by: ijliao
# $FreeBSD: devel/p5-Module-Pluggable-Fast/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Module-Pluggable-Fast
PORTVERSION=	0.19
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MRAMBERG
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Fast plugins with instantiation

BUILD_DEPENDS=	p5-UNIVERSAL-require>=0:${PORTSDIR}/devel/p5-UNIVERSAL-require
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Module::Pluggable::Fast.3

NO_STAGE=	yes
.include <bsd.port.mk>
