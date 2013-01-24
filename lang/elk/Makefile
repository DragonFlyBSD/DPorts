# New ports collection makefile for:	elk
# Date created:		08 March 1995
# Whom:			Thomas Gellekum <tg@FreeBSD.org>
#
# $FreeBSD: ports/lang/elk/Makefile,v 1.56 2012/11/17 05:58:49 svnexp Exp $
#

PORTNAME=	elk
PORTVERSION=	3.99.8
CATEGORIES=	lang scheme
MASTER_SITES=	http://sam.zoy.org/elk/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An embeddable Scheme interpreter

LIB_DEPENDS=	gdbm.4:${PORTSDIR}/databases/gdbm \
		elf.0:${PORTSDIR}/devel/libelf

USE_BZIP2=	yes
USE_MOTIF=	yes
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
MAKE_JOBS_UNSAFE=	yes

MAN1=		elk.1

CPPFLAGS+=	-I${LOCALBASE}/include/libelf -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64"
CFLAGS=		-O0
.endif

post-patch:
	@${REINPLACE_CMD} -e '/^SUBDIRS/s|doc examples||g' ${WRKSRC}/Makefile.in

post-install:
	${INSTALL_MAN} ${WRKSRC}/doc/man/elk.1 ${MANPREFIX}/man/man1
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	@${TAR} -C ${WRKSRC}/examples --exclude "*Makefile*" -cf - . | \
		${TAR} -C ${EXAMPLESDIR} --unlink -xf -
	@${CHOWN} -R ${SHAREMODE}:${SHAREGRP} ${EXAMPLESDIR}
	@${FIND} ${EXAMPLESDIR}/ -type f -exec ${CHMOD} ${SHAREMODE} {} \;
.endif

.include <bsd.port.post.mk>
