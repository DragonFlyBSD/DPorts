# New ports collection makefile for:	p5-XML-SAX-Base
# Date created:		2012-03-01
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-XML-SAX-Base/Makefile,v 1.10 2012/11/17 06:02:13 svnexp Exp $
#

PORTNAME=	XML-SAX-Base
PORTVERSION=	1.08
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Base class SAX Drivers and Filters

CONFLICTS=	p5-XML-SAX-0.[0-8]* p5-XML-SAX-0.9[0-8]*

PERL_CONFIGURE=	yes

MAN3=		XML::SAX::Base.3 \
		XML::SAX::BuildSAXBase.3 \
		XML::SAX::Exception.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501001
TEST_DEPENDS+=	p5-Test-Simple>=0.88:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
