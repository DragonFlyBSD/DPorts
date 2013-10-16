# Created by: Anton Yuzhaninov <citrin@citrin.ru>
# $FreeBSD: net/p5-Queue-Beanstalk/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Queue-Beanstalk
PORTVERSION=	0.02
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	citrin@citrin.ru
COMMENT=	Client for beanstalkd, in-memory workqueue daemon

USES=		perl5
USE_PERL5=	modbuild

MAN3=	Queue::Beanstalk.3
PLIST_FILES=	"%%SITE_PERL%%/Queue/Beanstalk.pm"
PLIST_FILES+=	"@dirrmtry %%SITE_PERL%%/Queue"

NO_STAGE=	yes
.include <bsd.port.mk>
