# Created by: Marc Fournier <scrappy@FreeBSD.org>
# $FreeBSD: converters/p5-Convert-ASN1/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Convert-ASN1
PORTVERSION=	0.26
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module to encode and decode ASN.1 data structures

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Math-BigInt>=1.997:${PORTSDIR}/math/p5-Math-BigInt
RUN_DEPENDS=	p5-Math-BigInt>=1.997:${PORTSDIR}/math/p5-Math-BigInt

USES=		perl5
USE_PERL5=	configure

MAN3=		Convert::ASN1.3

.include <bsd.port.mk>
