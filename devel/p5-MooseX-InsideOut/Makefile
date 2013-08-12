# Created by: gugu
# $FreeBSD: devel/p5-MooseX-InsideOut/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	MooseX-InsideOut
PORTVERSION=	0.106
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Inside-out objects with Moose

BUILD_DEPENDS=	p5-Hash-Util-FieldHash-Compat>=0:${PORTSDIR}/devel/p5-Hash-Util-FieldHash-Compat \
		p5-Moose>=2:${PORTSDIR}/devel/p5-Moose \
		p5-namespace-clean>=0.11:${PORTSDIR}/devel/p5-namespace-clean
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		MooseX::InsideOut.3 \
		MooseX::InsideOut::Role::Meta::Instance.3

.include <bsd.port.mk>
