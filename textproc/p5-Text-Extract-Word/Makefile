# Created by: jupengfei <jupengfei@gmail.com>
# $FreeBSD: textproc/p5-Text-Extract-Word/Makefile 326939 2013-09-11 05:29:55Z az $

PORTNAME=	Text-Extract-Word
PORTVERSION=	0.04
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	A simple module for extracting the text from a Microsoft Word file

LICENSE=	ART20

BUILD_DEPENDS=	p5-OLE-Storage_Lite>0:${PORTSDIR}/devel/p5-OLE-Storage_Lite
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Text::Extract::Word.3

.include <bsd.port.mk>
