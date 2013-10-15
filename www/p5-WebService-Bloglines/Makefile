# Created by: ijliao
# $FreeBSD: www/p5-WebService-Bloglines/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	WebService-Bloglines
PORTVERSION=	0.12
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Easy-to-use Interface for Bloglines Web Services

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-XML-RSS>=0:${PORTSDIR}/textproc/p5-XML-RSS \
		p5-XML-RSS-LibXML>=0:${PORTSDIR}/textproc/p5-XML-RSS-LibXML \
		p5-XML-XPath>=0:${PORTSDIR}/textproc/p5-XML-XPath
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	WebService::Bloglines.3

NO_STAGE=	yes
.include <bsd.port.mk>
