# New ports collection makefile for:	p5-XML-RPC
# Date created:				6 Sep 2001
# Whom:					Dominic Mitchell <dom@happygiraffe.net>
#
# $FreeBSD: net/p5-RPC-XML/Makefile 321187 2013-06-18 13:49:02Z az $
#

PORTNAME=	RPC-XML
PORTVERSION=	0.77
PORTREVISION=	1
CATEGORIES=	net www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XML-RPC client and server library for Perl

BUILD_DEPENDS=	p5-XML-Parser>=2.31:${PORTSDIR}/textproc/p5-XML-Parser \
		p5-libwww>=5.834:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS=	p5-XML-Parser>=2.31:${PORTSDIR}/textproc/p5-XML-Parser \
		p5-libwww>=5.834:${PORTSDIR}/www/p5-libwww

USE_GMAKE=	yes
PERL_CONFIGURE=	yes

MAN1=		make_method.1
MAN3=		Apache::RPC::Server.3 \
		Apache::RPC::Status.3 \
		RPC::XML.3 \
		RPC::XML::Client.3 \
		RPC::XML::Parser.3 \
		RPC::XML::Parser::XMLLibXML.3 \
		RPC::XML::Parser::XMLParser.3 \
		RPC::XML::ParserFactory.3 \
		RPC::XML::Procedure.3 \
		RPC::XML::Server.3

.include <bsd.port.mk>
