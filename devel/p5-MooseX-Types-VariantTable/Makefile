# New ports collection makefile for:	devel/p5-MooseX-Types-VariantTable
# Date created:				Dec 26, 2010
# Whom:					Wen Heping <wen@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-MooseX-Types-VariantTable/Makefile,v 1.5 2012/11/17 05:56:23 svnexp Exp $
#

PORTNAME=	MooseX-Types-VariantTable
PORTVERSION=	0.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Type constraint based variant table

RUN_DEPENDS=	p5-MooseX-Types-Structured>=0.12:${PORTSDIR}/devel/p5-MooseX-Types-Structured \
		p5-MooseX-Clone>=0.03:${PORTSDIR}/devel/p5-MooseX-Clone
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

PERL_CONFIGURE=	yes

MAN3=		MooseX::Types::VariantTable::Declare.3 \
		MooseX::Types::VariantTable.3

.include <bsd.port.mk>
