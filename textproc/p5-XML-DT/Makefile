# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: textproc/p5-XML-DT/Makefile 315276 2013-03-26 10:52:27Z tobez $

PORTNAME=	XML-DT
PORTVERSION=	0.63
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Perl module for down translation of XML to strings

BUILD_DEPENDS=	p5-XML-LibXML>=1.54:${PORTSDIR}/textproc/p5-XML-LibXML \
		p5-libwww>=1.35:${PORTSDIR}/www/p5-libwww \
		p5-XML-DTDParser>=2.00:${PORTSDIR}/textproc/p5-XML-DTDParser
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		mkdtskel.1 mkdtdskel.1 mkxmltype.1
MAN3=		XML::DT.3

.include <bsd.port.mk>
