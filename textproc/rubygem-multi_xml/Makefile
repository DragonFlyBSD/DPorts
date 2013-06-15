# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: textproc/rubygem-multi_xml/Makefile 319747 2013-06-03 02:18:28Z swills $

PORTNAME=	multi_xml
PORTVERSION=	0.5.3
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	Ruby library provide swappable XML backends

OPTIONS_DEFINE=	NOKOGIRI
NOKOGIRI_DESC=	Nokogiri is a HTML, XML, SAX, and Reader parser

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MNOKOGIRI}
RUN_DEPENDS+=	rubygem-nokogiri>=0:${PORTSDIR}/textproc/rubygem-nokogiri
.endif

.include <bsd.port.mk>
