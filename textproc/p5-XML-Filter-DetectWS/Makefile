# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: textproc/p5-XML-Filter-DetectWS/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	XML-Filter-DetectWS
PORTVERSION=	0.01
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	PerlSAX filter that detects ignorable whitespace

BUILD_DEPENDS=	p5-XML-Filter-SAXT>=0:${PORTSDIR}/textproc/p5-XML-Filter-SAXT
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
