# $NetBSD$

PORTNAME=	passenger

COMMENT=	Modules for running Ruby on Rails and Rack applications

USE_RUBY=	yes

.include "Makefile.common"

#BUILD_DEPENDS+=		asciidoc-[0-9]*:../../textproc/asciidoc
#DEPENDS+=		${RUBY_PKGPREFIX}-daemon_controller-[0-9]*:../../devel/ruby-daemon_controller
#DEPENDS+=		${RUBY_PKGPREFIX}-rack-[0-9]*:../../www/ruby-rack

STAGE_DESTDIR=	${WRKDIR}/stage_dir
PKGMANDIR=	${MANPREFIX}/man

do-build:
	cd ${WRKSRC}/build && ${PKGSRC_SETENV} ${MAKE_ENV} ${RAKE_BIN} common:clean agents

do-install:
	cd ${WRKSRC} && DESTDIR=${STAGE_DESTDIR} \
		PREFIX=${PREFIX} MANDIR=${PKGMANDIR} ${RAKE_BIN} pkgsrc
	mkdir -p ${STAGE_DESTDIR}${PKGMANDIR}/man1
	mkdir -p ${STAGE_DESTDIR}${PKGMANDIR}/man8
	${INSTALL_MAN} ${WRKSRC}/man/passenger-config.1 ${STAGE_DESTDIR}/${PKGMANDIR}/man1
	${INSTALL_MAN} ${WRKSRC}/man/passenger-memory-stats.8 ${STAGE_DESTDIR}/${PKGMANDIR}/man8
	${INSTALL_MAN} ${WRKSRC}/man/passenger-status.8 ${STAGE_DESTDIR}/${PKGMANDIR}/man8
	${INSTALL_MAN} ${WRKSRC}/man/passenger-stress-test.1 ${STAGE_DESTDIR}/${PKGMANDIR}/man1
	cd ${STAGE_DESTDIR}/${PREFIX} ; ${PAX} -rw . ${PREFIX}

.include <bsd.port.mk>
