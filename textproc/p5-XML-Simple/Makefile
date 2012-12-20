# New ports collection makefile for:	p5-XML-Simple
# Date created:				October 10th 2000
# Whom:	      				Andrew <andrew@ugh.net.au>
#
# $FreeBSD: ports/textproc/p5-XML-Simple/Makefile,v 1.25 2012/11/17 06:02:14 svnexp Exp $
#

PORTNAME=	XML-Simple
PORTVERSION=	2.20
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Trivial API for reading and writing XML (esp config files)

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser \
		p5-XML-SAX>=0.15:${PORTSDIR}/textproc/p5-XML-SAX \
		p5-XML-SAX-Expat>=0:${PORTSDIR}/textproc/p5-XML-SAX-Expat
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAKE_JOBS_UNSAFE=	yes
PERL_CONFIGURE=	yes

MAN3=		XML::Simple.3 XML::Simple::FAQ.3

.include <bsd.port.mk>
