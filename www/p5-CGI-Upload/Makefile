# Created by: Daniel B. Hemmerich
# $FreeBSD: www/p5-CGI-Upload/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	CGI-Upload
PORTVERSION=	1.11
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CGI class for handling browser file uploads

BUILD_DEPENDS=	p5-HTTP-BrowserDetect>=0:${PORTSDIR}/www/p5-HTTP-BrowserDetect \
		p5-File-MMagic>=0:${PORTSDIR}/devel/p5-File-MMagic \
		p5-CGI.pm>=0:${PORTSDIR}/www/p5-CGI.pm

USES=		perl5
USE_PERL5=	configure

MAN3=		CGI::Upload.3

NO_STAGE=	yes
.include <bsd.port.mk>
