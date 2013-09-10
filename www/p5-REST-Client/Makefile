# New ports collection makefile for:    p5-REST-Client
# Date created:                         2012-03-09
# Whom:                                 Paul Schmehl <pauls@utdallas.edu>
#
# $FreeBSD: www/p5-REST-Client/Makefile 326053 2013-09-02 18:23:34Z az $
#

PORTNAME=	REST-Client
PORTVERSION=	249
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	pauls@utdallas.edu
COMMENT=	A simple client for interacting with RESTful http/https resources

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Crypt-SSLeay>0:${PORTSDIR}/security/p5-Crypt-SSLeay \
		p5-URI>0:${PORTSDIR}/net/p5-URI \
		p5-libwww>0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		REST::Client.3

.include <bsd.port.mk>
