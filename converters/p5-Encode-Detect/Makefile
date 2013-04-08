# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: converters/p5-Encode-Detect/Makefile 315509 2013-03-29 00:44:53Z eadler $

PORTNAME=	Encode-Detect
PORTVERSION=	1.01
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Encode
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Encode::Encoding subclass that detects the encoding of data

BUILD_DEPENDS+=	p5-ExtUtils-CBuilder>=0:${PORTSDIR}/devel/p5-ExtUtils-CBuilder

PERL_MODBUILD=	yes

MAN3=		Encode::Detect.3 Encode::Detect::Detector.3

.include <bsd.port.mk>
