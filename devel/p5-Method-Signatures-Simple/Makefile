# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/p5-Method-Signatures-Simple/Makefile 332120 2013-10-30 14:44:54Z vanilla $

PORTNAME=	Method-Signatures-Simple
PORTVERSION=	1.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RHESA
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Basic method declarations with signatures, without source filters

BUILD_DEPENDS=	p5-Devel-Declare>=0:${PORTSDIR}/devel/p5-Devel-Declare
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
