# Created by: Alexander Botero-Lowry <alexbl@FreeBSD.org>
# $FreeBSD: devel/ruby-event-loop/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	event-loop
PORTVERSION=	0.3
CATEGORIES=	devel ruby
MASTER_SITES=	http://www.brockman.se/software/ruby-event-loop/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	An Event loop for Ruby

USE_RUBY=	yes
USE_RAKE=	yes

NO_STAGE=	yes
do-configure:
	@cd ${WRKSRC} && ${RUBY} setup.rb config --prefix=${PREFIX}

do-build:
	@cd ${WRKSRC} && ${RUBY} setup.rb setup

do-install:
	@cd ${WRKSRC} && ${RUBY} setup.rb install

.include <bsd.port.mk>
