# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: databases/ruby-mysql/Makefile 327804 2013-09-21 11:06:03Z dinoex $

PORTNAME=	mysql
PORTVERSION=	2.8.2
PORTREVISION=	1
CATEGORIES=	databases ruby
MASTER_SITES=	RF/mysql-ruby \
		http://www.tmtm.org/downloads/mysql/ruby/
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-ruby-${PORTVERSION}
DIST_SUBDIR=	ruby

MAINTAINER=	knu@FreeBSD.org
COMMENT=	Ruby module for accessing MySQL databases with a C API like interface

NO_STAGE=	yes

USE_MYSQL=	yes
USE_RUBY=	yes
USE_RUBY_EXTCONF=	yes

CONFIGURE_ARGS=	--with-mysql-config
INSTALL_TARGET=	site-install

PLIST_FILES=	%%RUBY_SITEARCHLIBDIR%%/mysql.so

.include <bsd.port.pre.mk>

.if !defined(NOPORTDOCS)
DOCSDIR=	${RUBY_MODDOCDIR}
PORTDOCS=	*
.endif

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}/ja
	${INSTALL_DATA} ${WRKSRC}/README.html ${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/tommy.css ${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/README_ja.html ${DOCSDIR}/ja/
	${LN} -fs ../tommy.css ${DOCSDIR}/ja/
.endif

.include <bsd.port.post.mk>
