# Created by: Denis Pokataev <catone@cpan.org>
# $FreeBSD: textproc/p5-XML-Atom-Ext-OpenSearch/Makefile 326944 2013-09-11 06:49:58Z az $

PORTNAME=	XML-Atom-Ext-OpenSearch
PORTVERSION=	0.03
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	catone@cpan.org
COMMENT=	XML::Atom extension for OpenSearch data

BUILD_DEPENDS=	p5-XML-Atom>=0:${PORTSDIR}/textproc/p5-XML-Atom
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	XML::Atom::Ext::OpenSearch.3 \
	XML::Atom::Ext::OpenSearch::Query.3

.include <bsd.port.mk>
