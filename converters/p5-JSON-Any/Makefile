# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: converters/p5-JSON-Any/Makefile 321946 2013-06-28 04:31:57Z clsung $

PORTNAME=	JSON-Any
PORTVERSION=	1.30
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl Wrapper Class for the various JSON classes

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-JSON>=2.02:${PORTSDIR}/converters/p5-JSON
RUN_DEPENDS=	p5-JSON>=2.02:${PORTSDIR}/converters/p5-JSON

PERL_CONFIGURE=	yes

MAN3=		JSON::Any.3

.include <bsd.port.mk>
