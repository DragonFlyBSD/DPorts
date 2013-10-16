# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: devel/p5-Class-CodeStyler/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Class-CodeStyler
PORTVERSION=	0.27
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl extension for code generation program formatting and execution

BUILD_DEPENDS=	p5-Class-STL-Containers>=0:${PORTSDIR}/devel/p5-Class-STL-Containers
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

NO_STAGE=	yes
.include <bsd.port.mk>
