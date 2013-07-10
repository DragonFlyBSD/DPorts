# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: devel/p5-JSON-Path/Makefile 322244 2013-07-03 18:42:54Z zi $

PORTNAME=	JSON-Path
PORTVERSION=	0.204
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Search nested hashref/arrayref structures using JSONPath

BUILD_DEPENDS=	p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter \
    		p5-JSON>=0:${PORTSDIR}/converters/p5-JSON \
		p5-Lvalue>=0:${PORTSDIR}/devel/p5-Lvalue
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		JSON::Path.3

post-patch::
	@${RM} ${WRKSRC}/lib/JSON/Path.pm.orig

.include <bsd.port.mk>
