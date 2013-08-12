# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: textproc/p5-XML-RSS-Liberal/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	XML-RSS-Liberal
PORTVERSION=	0.04
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XML::RSS With A Liberal Parser

RUN_DEPENDS=	p5-XML-Liberal>=0:${PORTSDIR}/textproc/p5-XML-Liberal	\
		p5-XML-RSS-LibXML>=0:${PORTSDIR}/textproc/p5-XML-RSS-LibXML
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

MAN3=		XML::RSS::Liberal.3

.include <bsd.port.mk>
