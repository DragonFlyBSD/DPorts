# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: www/p5-HTTP-SimpleLinkChecker/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	HTTP-SimpleLinkChecker
PORTVERSION=	1.16
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Check the HTTP response code for a link

BUILD_DEPENDS=	p5-libwww>0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS=	p5-libwww>0:${PORTSDIR}/www/p5-libwww

MAN1=	http_status.1
MAN3=	HTTP::SimpleLinkChecker.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
