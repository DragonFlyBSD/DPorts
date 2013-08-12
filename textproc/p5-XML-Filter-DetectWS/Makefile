# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: textproc/p5-XML-Filter-DetectWS/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	XML-Filter-DetectWS
PORTVERSION=	0.01
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	PerlSAX filter that detects ignorable whitespace

RUN_DEPENDS=	p5-XML-Filter-SAXT>=0:${PORTSDIR}/textproc/p5-XML-Filter-SAXT
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		XML::Filter::DetectWS.3

.include <bsd.port.mk>
