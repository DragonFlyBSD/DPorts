# Created by: Ying-Chieh Chen
# $FreeBSD: devel/p5-Devel-LexAlias/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Devel-LexAlias
PORTVERSION=	0.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	pclin@FreeBSD.org
COMMENT=	A perl module which does alias lexical variables

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Devel-Caller>=0.03:${PORTSDIR}/devel/p5-Devel-Caller
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Devel::LexAlias.3

NO_STAGE=	yes
.include <bsd.port.mk>
