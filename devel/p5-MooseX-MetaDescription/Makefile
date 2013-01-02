# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/devel/p5-MooseX-MetaDescription/Makefile,v 1.6 2012/12/14 08:35:33 svnexp Exp $

PORTNAME=	MooseX-MetaDescription
PORTVERSION=	0.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	A framework for adding additional metadata to Moose classes

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Moose>=0.4:${PORTSDIR}/devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

PERL_CONFIGURE=	yes

MAN3=		MooseX::MetaDescription.3 \
		MooseX::MetaDescription::Description.3 \
		MooseX::MetaDescription::Meta::Attribute.3 \
		MooseX::MetaDescription::Meta::Class.3 \
		MooseX::MetaDescription::Meta::Trait.3

.include <bsd.port.mk>
