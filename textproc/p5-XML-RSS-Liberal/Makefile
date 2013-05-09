# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: textproc/p5-XML-RSS-Liberal/Makefile 316795 2013-04-29 10:26:07Z tobez $

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

PERL_MODBUILD=	yes

MAN3=		XML::RSS::Liberal.3

.include <bsd.port.mk>
