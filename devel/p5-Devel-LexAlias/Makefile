# Created by: Ying-Chieh Chen
# $FreeBSD: ports/devel/p5-Devel-LexAlias/Makefile,v 1.9 2013/02/13 06:44:03 svnexp Exp $

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

PERL_CONFIGURE=	yes

MAN3=	Devel::LexAlias.3

.include <bsd.port.mk>
