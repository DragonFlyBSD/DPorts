# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: textproc/p5-XML-Dumper/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	XML-Dumper
PORTVERSION=	0.81
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for dumping Perl objects from/to XML

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		XML::Dumper.3

.include <bsd.port.mk>
